//
//  UIImageView+HBExtention.m
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import "UIImageView+HBExtention.h"

@implementation UIImageView (HBExtention)
/**
 添加帧动画
 
 @param gifArr 图片数组
 @param duration 动画时长
 */
- (void)showGif:(NSArray *)gifArr duration:(NSTimeInterval)duration
{
    self.animationImages = gifArr;
    self.animationDuration = duration;
    self.animationRepeatCount = 0;
    [self startAnimating];
}
/**
 移除动画
 */
- (void)removeGif
{
    if (self.isAnimating) {
        
        [self stopAnimating];
    }
    
    [self removeFromSuperview];
}
@end
