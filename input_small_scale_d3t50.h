#ifndef INPUT_SMALL_SCALE_D38_H
#define INPUT_SMALL_SCALE_D38_H

//D3T50 instance
#ifdef D3T50

    //Number of periods of the network activity (T)
    const unsigned short T = 50;

    //Maximum demand
    const unsigned short DEMANDA_MAX =  38;

    //Initial node demand and period (i,t)
    const unsigned short source_demanda[38][2] = {
        {75,0},
        {35,1},
        {11,2},
        {22,2},
        {29,2},
        {38,2},
        {51,2},
        {2,4},
        {24,4},
        {34,4},
        {38,4},
        {40,4},
        {57,4},
        {71,4},
        {73,4},
        {49,5},
        {78,5},
        {6,6},
        {97,6},
        {83,7},
        {46,8},
        {11,9},
        {59,9},
        {91,9},
        {27,10},
        {29,10},
        {39,10},
        {75,10},
        {88,10},
        {87,11},
        {10,12},
        {24,12},
        {92,12},
        {94,12},
        {68,13},
        {98,13},
        {30,14},
        {86,14}
    };
    
    //Define shortest paths for all demand nodes
    const unsigned short min_paths[38][100][16] = { 
    {
        {75,61,51,57,0}
    },
    {        
        {35,50,0} 
    },
    {        
        {11,9,64,8,0},
        {11,18,5,8,0},
        {11,18,37,8,0},
        {11,27,5,8,0},
        {11,27,37,8,0},
        {11,27,64,8,0},
        {11,62,5,8,0},
        {11,62,37,8,0},
        {11,62,64,8,0},
        {11,83,5,8,0},
        {11,83,37,8,0},
        {11,83,64,8,0},
        {11,84,64,8,0} 
    },
    {
        {22,34,0},
        {22,38,0},
        {22,50,0},
        {22,57,0},
        {22,80,0},
        {22,87,0}
    },
    {
        {29,32,34,0},
        {29,32,38,0},
        {29,32,50,0},
        {29,32,57,0},
        {29,49,57,0},
        {29,51,57,0},
        {29,65,57,0},
        {29,70,57,0},
        {29,81,57,0},
        {29,90,57,0}
    },
    {
        {38,0} 
    },
    {
        {51, 57, 0}, 
    },
    {
        {2,7,68,49,57,0},
        {2,7,92,49,57,0},
        {2,7,92,70,57,0},
        {2,43,19,32,34,0},
        {2,43,19,32,38,0},
        {2,43,19,32,50,0},
        {2,43,19,32,57,0},
        {2,43,19,49,57,0},
        {2,43,19,51,57,0},
        {2,43,19,65,57,0},
        {2,43,19,70,57,0},
        {2,43,44,17,96,0},
        {2,43,44,30,96,0},
        {2,43,68,49,57,0},
        {2,43,92,49,57,0},
        {2,43,92,70,57,0},
        {2,45,19,32,34,0},
        {2,45,19,32,38,0},
        {2,45,19,32,50,0},
        {2,45,19,32,57,0},
        {2,45,19,49,57,0},
        {2,45,19,51,57,0},
        {2,45,19,65,57,0},
        {2,45,19,70,57,0},
        {2,45,44,17,96,0},
        {2,45,44,30,96,0},
        {2,45,68,49,57,0},
        {2,45,69,15,96,0},
        {2,45,69,26,57,0},
        {2,45,69,26,80,0},
        {2,45,69,32,34,0},
        {2,45,69,32,38,0},
        {2,45,69,32,50,0},
        {2,45,69,32,57,0},
        {2,45,69,49,57,0},
        {2,45,69,65,57,0},
        {2,45,69,70,57,0},
        {2,45,69,86,96,0},
        {2,45,92,49,57,0},
        {2,45,92,70,57,0},
        {2,66,19,32,34,0},
        {2,66,19,32,38,0},
        {2,66,19,32,50,0},
        {2,66,19,32,57,0},
        {2,66,19,49,57,0},
        {2,66,19,51,57,0},
        {2,66,19,65,57,0},
        {2,66,19,70,57,0},
        {2,66,29,32,34,0},
        {2,66,29,32,38,0},
        {2,66,29,32,50,0},
        {2,66,29,32,57,0},
        {2,66,29,49,57,0},
        {2,66,29,51,57,0},
        {2,66,29,65,57,0},
        {2,66,29,70,57,0},
        {2,66,29,81,57,0},
        {2,66,29,90,57,0},
        {2,66,68,49,57,0},
        {2,66,92,49,57,0},
        {2,66,92,70,57,0}
    },
    {
        {24,8,0},
        {24,67,0},
        {24,87,0}
    },
    {
        {34,0} 
    },
    {
        {38,0}
    },
    {
        {40,96,0} 
    },
    {
        {57,0}
    },
    {
        {71,34,0},
        {71,50,0} 
    },
    {
        {73,58,50,0}
    },
    {
        {49,57,0} 
    },
    {
        {78,13,74,42,64,8,0}
    },
    {
        {6,10,35,50,0},
        {6,10,58,50,0},
        {6,10,88,50,0},
        {6,10,88,57,0},
        {6,73,58,50,0},
        {6,79,35,50,0},
        {6,79,58,50,0},
        {6,79,88,50,0},
        {6,79,88,57,0} 
    },
    {
        {97,28,24,8,0},
        {97,28,24,67,0},
        {97,28,24,87,0},
        {97,28,31,8,0},
        {97,28,31,67,0},
        {97,28,31,87,0},
        {97,28,40,96,0} 
    },
    {
        {83,5,8,0},
        {83,37,8,0},
        {83,64,8,0} 
    },
    {
        {46,96,0} 
    },
    {
        {11,9,64,8,0},
        {11,18,5,8,0},
        {11,18,37,8,0},
        {11,27,5,8,0},
        {11,27,37,8,0},
        {11,27,64,8,0},
        {11,62,5,8,0},
        {11,62,37,8,0},
        {11,62,64,8,0},
        {11,83,5,8,0},
        {11,83,37,8,0},
        {11,83,64,8,0},
        {11,84,64,8,0} 
    },
    {
        {59,5,8,0},
        {59,35,50,0},
        {59,58,50,0},
        {59,71,34,0},
        {59,71,50,0},
        {59,88,50,0},
        {59,88,57,0} 
    },
    {
        {91,28,24,8,0},
        {91,28,24,67,0},
        {91,28,24,87,0},
        {91,28,31,8,0},
        {91,28,31,67,0},
        {91,28,31,87,0},
        {91,28,40,96,0}
    },
    {
        {27,5,8,0},
        {27,37,8,0},
        {27,64,8,0}
    },
    {
        {29,32,34,0},
        {29,32,38,0},
        {29,32,50,0},
        {29,32,57,0},
        {29,49,57,0},
        {29,51,57,0},
        {29,65,57,0},
        {29,70,57,0},
        {29,81,57,0},
        {29,90,57,0} 
    },
    {
        {39,16,40,96,0},
        {39,16,46,96,0},
        {39,25,40,96,0} 
    },
    {
        {75,61,51,57,0} 
    },
    {
        {88,50,0},
        {88,57,0}
    },
    {
        {87, 0}
    },
    {
        {10,35,50,0},
        {10,58,50,0},
        {10,88,50,0},
        {10,88,57,0}
    },
    {
        {24,8,0},
        {24,67,0},
        {24,87,0} 
    },
    {
        {92,49,57,0},
        {92,70,57,0}
    },
    {
        {94,1,44,17,96,0},
        {94,1,44,30,96,0},
        {94,1,68,49,57,0},
        {94,1,92,49,57,0},
        {94,1,92,70,57,0},
        {94,7,68,49,57,0},
        {94,7,92,49,57,0},
        {94,7,92,70,57,0},
        {94,43,19,32,34,0},
        {94,43,19,32,38,0},
        {94,43,19,32,50,0},
        {94,43,19,32,57,0},
        {94,43,19,49,57,0},
        {94,43,19,51,57,0},
        {94,43,19,65,57,0},
        {94,43,19,70,57,0},
        {94,43,44,17,96,0},
        {94,43,44,30,96,0},
        {94,43,68,49,57,0},
        {94,43,92,49,57,0},
        {94,43,92,70,57,0}
    },
    {
        {68,49,57,0}
    },
    {
        {98,51,57,0},
        {98,58,50,0},
        {98,81,57,0},
        {98,88,50,0},
        {98,88,57,0},
        {98,90,57,0}
    },
    {
        {30,96,0}
    },
    {
        {86,96,0}
    }
    };
    
    //Define the number of shortest paths
    const unsigned short min_paths_size[38] = {1,1,13,6,10,1,1,61,3,1,1,1,1,2,1,1,1,9,7,3,1,13,7,7,3,10,3,1,2,1,4,3,2,21,1,6,1,1};
    
# endif
#endif /* INPUT_SMALL_SCALE_D38_H */

