class Gun
{
    public:
        int Power;
        int Ammo;

        int getPower() const
        {
            return Power;
        }
        int getAmmo() const
        {
            return Ammo;
        }

        void setPower(int Value)
        {
            Power = Value;
        }
        void setAmmo(int Value)
        {
            Ammo = Value;
        }

        static Gun newGun(int Power, int Ammo = 20)
        {
            Gun newGUN = Gun();
            newGUN.setPower(Power);
            newGUN.setAmmo(Ammo);

            return newGUN;
        }
};