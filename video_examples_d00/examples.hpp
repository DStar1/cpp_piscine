#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
    public:
        int foo;
        char a1;
        int a2;
        float a3;

        float const pi;
        int qd;

        int publicfoo;

        Sample(float const f, char p1, int p2, float p3);
        ~Sample(void);

        void bar(void) const; //only modifiable decalation ::

        int getfoo(void) const;
        void setfoo(int v);

        int compare(Sample * other) const;

        static int getNbInst(void);

    private://unmodifiable
        int _privatefoo;
        int _foo;
        // void _privateBar(void) const;

        static int _nbInst;
};

#endif