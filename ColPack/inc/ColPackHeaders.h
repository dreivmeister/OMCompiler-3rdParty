/*******************************************************************************
    This file is part of ColPack, which is under its License protection.
    You should have received a copy of the License. If not, see
    <https://github.com/CSCsw/ColPack>
*******************************************************************************/

/************************************************************************************/
/*																					*/
/*  Headers.h (Header of header files) 												*/
/*																					*/
/************************************************************************************/
#ifndef HEADER_H
#define HEADER_H

#include "Definitions.h"

#ifdef SYSTEM_TIME

#include <sys/times.h>

#else

#include <ctime>

#endif

#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cstdarg>

#include <list>
#include <map>
#include <vector>
#include <set>
#include <queue>

#include <algorithm>
#include <iterator>
#include <utility>	//for pair<dataType1, dataType2>

#ifdef _OPENMP
	#include <omp.h>
#endif

#include "../src/Utilities/Pause.h"
#include "../src/Utilities/File.h"
#include "../src/Utilities/Timer.h"
#include "../src/Utilities/MatrixDeallocation.h"
#include "../src/Utilities/mmio.h"
#include "../src/Utilities/current_time.h"
#include "../src/Utilities/CoutLock.h"

#include "../src/Utilities/StringTokenizer.h"
#include "../src/Utilities/DisjointSets.h"

#include "../src/GeneralGraphColoring/GraphCore.h"
#include "../src/GeneralGraphColoring/GraphInputOutput.h"
#include "../src/GeneralGraphColoring/GraphOrdering.h"
#include "../src/GeneralGraphColoring/GraphColoring.h"
#include "../src/GeneralGraphColoring/GraphColoringInterface.h"

#include "../src/BipartiteGraphBicoloring/BipartiteGraphCore.h"
#include "../src/BipartiteGraphBicoloring/BipartiteGraphInputOutput.h"
#include "../src/BipartiteGraphBicoloring/BipartiteGraphVertexCover.h"
#include "../src/BipartiteGraphPartialColoring/BipartiteGraphPartialOrdering.h"
#include "../src/BipartiteGraphBicoloring/BipartiteGraphOrdering.h"
#include "../src/BipartiteGraphBicoloring/BipartiteGraphBicoloring.h"
#include "../src/BipartiteGraphPartialColoring/BipartiteGraphPartialColoring.h"
#include "../src/BipartiteGraphBicoloring/BipartiteGraphBicoloringInterface.h"
#include "../src/BipartiteGraphPartialColoring/BipartiteGraphPartialColoringInterface.h"

#include "../src/Recovery/RecoveryCore.h"
#include "../src/Recovery/HessianRecovery.h"
#include "../src/Recovery/JacobianRecovery1D.h"
#include "../src/Recovery/JacobianRecovery2D.h"

#include "../src/Utilities/extra.h"

#endif
