//
//  UIImageView+HBExtention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (HBExtention)

/**
 添加帧动画

 @param gifArr 图片数组
 @param duration 动画时长
 */
- (void)showGif:(NSArray *)gifArr duration:(NSTimeInterval)duration;

/**
 移除动画
 */
- (void)removeGif;

@end
