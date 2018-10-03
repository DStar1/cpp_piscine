#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
    public:
        Sample(int start);
        ~Sample(void);

        char *getName(void) const;
        void setName(void);

    private://unmodifiable
        char *_firstName;
        // char *_lastName;
        // char *_nickName;
        // char *_login;
        // char *_postalAddress;
        // char *_email;
        // char *_phoneNumber;
        // char *_birthday;
        // char *_fvoriteMeal;
        // char *_underwearColor;
        // char *_darkestSecret;


        static int _nbInst;
};

#endif