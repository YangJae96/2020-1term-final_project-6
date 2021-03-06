//
// Created by hideoncode on 6/9/20.
//

#ifndef INC_2020_1TERM_FINAL_PROJECT_6_STAGECLASS_H
#define INC_2020_1TERM_FINAL_PROJECT_6_STAGECLASS_H


class stageClass {
public:
    int stageWidth, stageHeight, itemTick;
    int endScore, missionGrowth, missionPoison, missionGate;
    char w = '1', i = '2', v = ' ';
    char stage1[25][25] = {{i, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, i},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {i, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, i}};

    char stage2[29][29] = {{i, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, i},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, w, w, w, w, w, i, w, w, w, w, w, w, w, w, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {i, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, i}};

    char stage3[30][30] = {{i, w, w, w, w, w, w, i, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, i},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, w, v, v, v, v, v, w, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, w, w, w, v, v, v, v, v, w, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, w, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, w, w, w, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, w, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w, v, v, v, v, v, v, w},
                           {i, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, i, w, w, w, w, w, w, i}};

    char stage4[35][35] = {{i, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, i},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {w, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, v, w},
                           {i, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, w, i}};

    explicit stageClass(int whichStage);

};


#endif //INC_2020_1TERM_FINAL_PROJECT_6_STAGECLASS_H
