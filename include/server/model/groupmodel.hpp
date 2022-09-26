#ifndef GROUPMODEL_H
#define GROUPMODEL_H

#include <string>
#include <vector>

#include "group.hpp"
using namespace std;

// 维护群组信息的操作接口方法
class GroupModel {
public:
    // 创建群组
    bool createGroup(Group &group);
    // 加入群组
    void addGroup(int userid, int groupid, string role);
    // 查询用户所在群组信息
    vector<Group> queryGroups(int userid);
    // 根据指定的 groupid 查询群组用户 id 列表，根据 userid
    // 给群组其它成员群发信息
    vector<int> queryGroupUsers(int userid, int groupid);
};

#endif