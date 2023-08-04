#ifndef INCLUDE_AND_SETTING_H
#define INCLUDE_AND_SETTING_H

#ifndef OCTOMAP_DEPRECATED
#define insertScan insertPointCloud
#endif
#include <octomap/OccupancyOcTreeBase.h>
#include <octomap/OcTree.h>

typedef std::vector<octomap::point3d> PointCloud;
void getPointsFromOctree(octomap::OcTree* tree, PointCloud& pcl_occupied, PointCloud& pcl_empty);
#endif
