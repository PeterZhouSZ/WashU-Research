#pragma once
#ifndef SCAN_GFLAGS_H
#define SCAN_GFLAGS_H

#include <etw_utils.hpp>

#include <gflags/gflags.h>
#include <string>
#include <vector>

DECLARE_bool(visulization);
DECLARE_bool(previewIn);
DECLARE_bool(previewOut);
DECLARE_bool(redo);
DECLARE_bool(quietMode);
DECLARE_bool(tinyPreviewIn);
DECLARE_bool(save);
DECLARE_bool(debugMode);
DECLARE_bool(reshow);
DECLARE_bool(V1);
DECLARE_bool(V2);
DECLARE_bool(pe);
DECLARE_bool(fe);
DECLARE_bool(preview);
DECLARE_bool(3D);
DECLARE_bool(2D);
DECLARE_string(floorPlan);
DECLARE_string(binaryFolder);
DECLARE_string(dmFolder);
DECLARE_string(rotFolder);
DECLARE_string(outputV1);
DECLARE_string(outputV2);
DECLARE_string(zerosFolder);
DECLARE_string(voxelFolder);
DECLARE_string(panoFolder);
DECLARE_string(PTXFolder);
DECLARE_string(normalsFolder);
DECLARE_string(descriptorsFolder);
DECLARE_string(SIFTFolder);
DECLARE_string(doorsFolder);
DECLARE_string(dataPath);
DECLARE_int32(startIndex);
DECLARE_int32(startNumber);
DECLARE_int32(numScans);
DECLARE_int32(numLevels);
DECLARE_int32(metricNumber);
DECLARE_int32(top);
DECLARE_int32(threads);
DECLARE_double(scale);

void prependDataPath();
int numberToIndex(const std::vector<fs::path> &names, const int number);

#endif // SCAN_GFLAGS_H
