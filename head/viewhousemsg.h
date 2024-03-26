#ifndef _VIEW_HOUSE_MESSAGE
#define _VIEW_HOUSE_MESSAGE

struct ViewHouseMsg{
    struct House * house;
    struct User * user;
    struct Middium * middium;
};

struct VHMListNode{
    struct ViewHouseMsg * data;
    struct VHMListNode * nxt;
};

struct VHMList{
    struct VHMListNode head;
    int cnt;
};

#endif