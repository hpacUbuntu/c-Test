class Player
{
    public:
        int HP;

        void setHP(int hp)
        {
            HP = hp;
        }

        int getHP() const
        {
            return HP;
        }

        static Player newPlayer(int hp)
        {
            Player newP = Player();
            newP.setHP(hp);

            return newP;
        }
};