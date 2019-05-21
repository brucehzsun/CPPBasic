//
// Created by bruce on 2018/10/10.
//

#include <iostream>
#include <set>

using namespace std;

#ifndef CPP_INTERFACE_H
#define CPP_INTERFACE_H


class DetectResult {

};

class ArSDK {
public:
    /**
     * 输入图片提取特征，用于添加索引
     * 图片-->特征
     *
     * @param marker，图片
     * @param result_feature 返回的feature结果
     * @return 0成功，非零失败
     */
    int get_add_feature(const string &marker, string &result_feature);

    /**
     * 输入图片提取特征，用于图片特征检索
     * 图片-->特征
     *
     * @param marker，图片
     * @param result_feature 返回的feature结果
     * @return 0成功，非零失败
     */
    int get_detect_feature(const string &marker, string &result_feature);


    /**
     * 添加索引
     *
     * @param groupId  图片的groupId,没有groupId传0
     * @param marker_id 图片的MarkerId，实际上就是图片的唯一标识
     * @param features 图片对应的特征集合
     * @return 0成功，非0失败
     */
    int add_index(const int group_id, const string &marker_id, const string &feature);

    /**
     * 删除索引
     *
     * @param group_id  图片的groupId，没有groupId传0、
     * @param marker_id 图片的MarkerId，实际上就是图片的唯一标识
     * @return 0成功，非0失败
     */
    int delete_index(const int group_id, const string &marker_id);

    /**
     * 从本地已经保存的索引文件中加载索引
     * @param voc_path 字典文件路径
     * @param db_path 索引文件路径
     * @param marker_num 索引数量
     * @return 0 成功， >0 失败 算法提供具体含义保存二进制Feature/
     */
    int load(const string &voc_path, const string &db_path);


    /**
     * 特征检索，输入特征，输出检索结果，每个结果包含多个marker_id;
     * @param feature 输入特征信息
     * @param group_ids 检索范围
     * @param results 返回结果，多个DetectResult,每个DetectResult包含一个marker_id,score等信息
     * @param max_num
     * @return
     */
    int detect(const string &feature, const set<int> &group_ids, vector<DetectResult> &results, int max_num);


    int merge(vector<vector<DetectResult>> &input, vector<DetectResult> &results, int max_num);
};


#endif //CPP_INTERFACE_H
