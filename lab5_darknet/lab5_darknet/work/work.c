#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "work.h"




// Task 1: 编写交并比IOU计算函数
/*
输入：
    rectangle_box A, rectangle_box B:
        float x,y                   矩形框的中心点坐标
        float w,h                   矩形框的宽和高 

输出：交并比计算结果，一个float类型浮点数
*/
float iou_compute(rectangle_box A, rectangle_box B)
{
    //code here
	return ;
}






// Task 2: 编写卷积函数
/*
输入：
    layer_params para:
        input_w, input_h, input_c   输入特征图的宽、高、通道数(w*h*c)
        kernel_size, kernel_n       卷积核尺寸(size*size)、卷积核数量(n)
        stride                      卷积步长
        pad                         补0的数量，上下左右对称补0
    float *input:                   输入特征图数据，平铺的一维数组
    float *weight:                  卷积核的权重数据，平铺的一维数组
    float *output:                  保存计算结果的一维数组
*/
void convolutional_compute(layer_params para, float* input, float* weight, float* output)
{

    //code here 
    return;  
}



// Task 3: 编写最大值池化函数
/*
输入：
    layer_params para:
        input_w, input_h, input_c   输入特征图的宽、高、通道数(w*h*c)
        kernel_size                 最大值池化的核尺寸(size*size)
        kernel_n                    无意义
        stride                      池化步长
        pad                         在Darknet中无实际意义，详见文档说明
    float *input:                   输入特征图数据，平铺的一维数组
    float *output:                  保存计算结果的一维数组
*/
void maxpool_compute(layer_params para, float* input, float* output)
{
    //code here
    return;
}


// Task 4: 编写上采样函数
/*
输入：
    layer_params para:
        input_w, input_h, input_c   输入特征图的宽、高、通道数(w*h*c)
        kernel_size                 无意义
        kernel_n                    无意义
        stride                      上采样系数
        pad                         无意义
    float *input:                   输入特征图数据，平铺的一维数组
    float *output:                  保存计算结果的一维数组

    上采样的方式为：原本的一个像素被简单地复制为 stride*stride 个像素
*/
void upsample_compute(layer_params para, float* input, float* output)
{
    //code here
    return;
}



