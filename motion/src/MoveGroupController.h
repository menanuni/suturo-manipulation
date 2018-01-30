#ifndef MOTION_MOVEGROUPCONTROLLER_H
#define MOTION_MOVEGROUPCONTROLLER_H


#include <moveit_msgs/MoveItErrorCodes.h>
#include <moveit/move_group_interface/move_group.h>
#include <geometry_msgs/PointStamped.h>
#include <tf/transform_listener.h>

class MoveGroupController {
private:
    struct Private;
public:
    /**
     * Moves the endeffector of the given {@link moveit::planning_interface::MoveGroup} to the
     * given {@link geometry_msgs::PointStamped}. The point will be transformed to the right
     * frameid. So dont worry about the frameid, we take care of it.
     *
     * @param group The group to move.
     * @param goal_point The point to move the group to.
     * @return Success if successful or the {@link moveit_msgs::MoveItErrorCodes}
     */
    moveit_msgs::MoveItErrorCodes
    moveGroupToCoordinates(moveit::planning_interface::MoveGroup &group, geometry_msgs::PointStamped &goal_point);

};
#endif //MOTION_MOVEGROUPCONTROLLER_H
