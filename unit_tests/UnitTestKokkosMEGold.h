/*------------------------------------------------------------------------*/
/*  Copyright 2014 National Renewable Energy Laboratory.                  */
/*  This software is released under the license detailed                  */
/*  in the file, LICENSE, which is located in the top-level Nalu          */
/*  directory structure                                                   */
/*------------------------------------------------------------------------*/

#ifndef UNITTESTKOKKOSMEGOLD_H
#define UNITTESTKOKKOSMEGOLD_H

namespace kokkos_me_gold {

static constexpr double hex8_scv_grad_op[192] = {
-0.709008450503, -0.727714491318, -0.663063588357, 0.484580112514, -0.190243164456, -0.181130324895, 0.205595116162, 0.211255698851, 
-0.0497357381272, -0.104130914194, 0.581438763902, -0.189098085606, -0.144113048152, -0.148624102341, 0.59124960662, 0.192267738176, 
-0.0320985898968, 0.210380159281, 0.0787787167225, 0.080857165702, 0.0736737320397, -0.00396927072632, 0.225128719556, 0.207724239044, 

-0.610981201084, -0.378513476884, -0.209311011818, 0.391528353914, -0.607970351533, -0.470152580968, 0.271565067807, 0.688661478434, 
-0.142610635085, -0.156641861527, 0.170934928465, -0.0650680399714, -0.177527990139, -0.0944493035819, 0.152015229688, 0.208906681973, 
-0.107491217706, 0.508639173893, 0.116654099492, 0.261275681524, 0.174248688599, -0.0435031504349, 0.0675522612814, 0.0522391756631, 

-0.271593154379, -0.278985980287, -0.0212118199841, 0.0470747323091, -0.639804316384, -0.0649688790904, 0.717779494208, 0.737956289303, 
-0.598078750768, -0.622594364044, 0.04883180529, -0.198026164451, -0.0797532771342, -0.0819951432558, 0.0664531945298, 0.048024900413, 
-0.180267554942, 0.198915110543, 0.336259800333, 0.344987081327, 0.462354627131, -0.175198131705, 0.0492778189498, 0.15456268209, 

-0.375529408516, -0.652234206689, -0.170278708324, 0.14925162733, -0.200562926814, -0.0699850306135, 0.640904450388, 0.223146854806, 
-0.207947283901, -0.547139520354, 0.517804285676, -0.504812701154, -0.0920482567174, -0.189449903974, 0.181496361557, 0.0607932800393, 
-0.0575338095195, 0.0560903001282, 0.246763029584, 0.102343783191, 0.168940169698, -0.0829952017542, 0.256485923324, 0.54649689261, 

-0.145777499732, -0.186139697218, -0.616769469436, 0.191884279745, -0.0722578982512, -0.193119335824, 0.0759225296877, 0.0642553766973, 
-0.0610682388145, -0.0127091905923, 0.202977462604, -0.195675203764, -0.683302767189, -0.578298390275, 0.54961414933, 0.493662749903, 
-0.223400127627, 0.220616178406, 0.200437559286, 0.190557319134, 0.0834533455163, -0.120117661109, 0.602305954937, 0.212948574586, 

-0.179297381127, -0.10742747267, -0.177885270969, 0.20273506718, -0.204186901808, -0.481398778908, 0.100891293604, 0.173811093476, 
-0.156984646525, -0.048661481083, 0.0448153071361, -0.0581345526191, -0.594642767311, -0.25254143761, 0.122146623859, 0.437953329747, 
-0.403337764225, 0.523210973572, 0.245923256883, 0.591174260827, 0.184848497192, -0.164901317892, 0.157692914875, 0.0441971543978, 

-0.0794306099035, -0.0766832480142, -0.0467316094569, 0.0646203858914, -0.183917007752, -0.13697435405, 0.208922102928, 0.146582542283, 
-0.521634160181, -0.233271514626, 0.00272811113711, -0.177098527714, -0.228501920783, -0.202227343456, 0.0804148344799, 0.223230884457, 
-0.468283821496, 0.250905926401, 0.714875489132, 0.690149232128, 0.420584485112, -0.670444817095, 0.0916515351712, 0.130533405409, 

-0.088083235501, -0.194066663427, -0.17799973598, 0.0708158956616, -0.0688149198552, -0.0643040972414, 0.220051012473, 0.0598443986312, 
-0.189578605825, -0.241439730038, 0.216667484309, -0.523998150242, -0.23525766345, -0.592422715025, 0.182911234026, 0.222111701336, 
-0.20985233448, 0.0460578555978, 0.689145080473, 0.169310471151, 0.148174624491, -0.637343060954, 0.619334278697, 0.578736875172, 
};

static constexpr double hex8_scv_shifted_grad_op[192] = {
-1.3472122230881, -1.3912758242610, -1.5417317542330, 0.9210313072993, 0.0779105977055, 0.1249785091164, 0.0000000000000, 0.0000000000000,
0.0000000000000, 0.1046323906917, 1.0262431666624, 0.0198287438781, 0.3215485250971, 0.2871220598931, 1.3969245012385, 0.0000000000000,
0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000,

-0.9466766951368, -0.3717068263529, -0.1101415541302, 0.5864763868298, -1.2372088894926, -0.8547703486559, 0.1782089720798, 1.4763827716162,
0.1603058971275, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.1819913362271,
0.1325329442293, 0.8046060056587, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000,

0.0000000000000, 0.0000000000000, 0.0000000000000, -0.5947256863298, -1.5814013548244, 0.5419439161334,1.7346015964927, 1.9436957550626,
-1.5031240395641, -1.2917434460034, -0.4885942890918, 0.0883115427632, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000,
0.0000000000000, 0.0000000000000, 0.1518675358405, 0.1262998888536, 0.8728685806675, 0.0000000000000, 0.0000000000000, 0.0000000000000,

-0.4471684387839, -1.0567821397524, -0.0744500061931, 0.0000000000000, 0.0000000000000, 0.0000000000000, 1.0952868054990, 0.0340481863337,
-0.1564932737726,-0.8282502741671, 0.8378740688558, -0.6766438800968, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000,
0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.1801319074520, 0.1848598845629, 0.9075871600625,

0.3915739123933, 0.1682646719960, -1.2979715245208, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000,
0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000,-1.4266712447781, -1.0754346862114, 1.1529788039873, 0.8115857897849,
-0.2186493846034, 0.1085373293746, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.2235115425998, 1.1258193988188, 0.0364553911589,

0.0000000000000, 0.0000000000000, 0.0000000000000, 0.1895743714372, -0.1110630064352, -0.7737237561726, 0.0000000000000, 0.0000000000000,
0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, -0.9037263033566, -0.2008047815021, -0.0898577608818, 0.5645051546225,
-0.5364260457710, 0.7678172724553, 0.1496467772969, 0.8482938337083, 0.0957642445992, 0.0000000000000, 0.0000000000000, 0.0000000000000,

0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, -0.0827765320069, -0.1806697395694,
-0.8478416232226, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.2250038205019,
-0.7005920446840, 0.2749772623204,1.2753421855181, 1.1680789956702, 0.5681068759820, -1.4175694740131, -0.2868172114167, 0.0047574849202,

0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000, 0.0000000000000,
0.0000000000000, -0.1877286054310, 0.2184126908895, -0.8529752835099, 0.2860980953771, -1.2154730763827, -0.2032927499234, 0.0000000000000,
0.0000000000000, 0.0000000000000, 1.5350310024637, -0.3176443684808, -0.2677896728470,-1.6334004924097, 1.3147047539740, 1.3240577062803,
};

static constexpr double tet4_scv_grad_op[48] = {
-1.4401695649, -2.67043375843, -1.38813133721, 0.927537675004, 
0.260196981651, 0.0710128009814, 0.177707055247, 1.71531892676, 
0.0465628908124, 0.334924834651, 0.694917850018, 1.27055564542, 

-1.4401695649, -2.67043375843, -1.38813133721, 0.927537675004, 
0.260196981651, 0.0710128009814, 0.177707055247, 1.71531892676, 
0.0465628908124, 0.334924834651, 0.694917850018, 1.27055564542,

-1.4401695649, -2.67043375843, -1.38813133721, 0.927537675004, 
0.260196981651, 0.0710128009814, 0.177707055247, 1.71531892676, 
0.0465628908124, 0.334924834651, 0.694917850018, 1.27055564542, 

-1.4401695649, -2.67043375843, -1.38813133721, 0.927537675004, 
0.260196981651, 0.0710128009814, 0.177707055247, 1.71531892676, 
0.0465628908124, 0.334924834651, 0.694917850018, 1.27055564542, 
};

}

#endif /*UNITTESTKOKKOSMEGOLD_H */
