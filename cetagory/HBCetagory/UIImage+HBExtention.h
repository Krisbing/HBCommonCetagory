//
//  UIImage+HBExtention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (HBExtention)
/**
 *  图片高斯模糊
 *
 *  @param sourceImage 目标图片
 *  @param blur  模糊等级 0~1
 *
 *  @return 返回模糊后的照片
 */
+ (UIImage *)hb_bluredImageWithSourceImage:(UIImage *)sourceImage blurLevel:(CGFloat)blurLevel;
/**
 *  改变Image的任何的大小
 *
 *  @param size 目的大小
 *
 *  @return 修改后的Image
 */
- (UIImage *)hb_cropImageWithAnySize:(CGSize)size;


/**
 *  裁剪和拉升图片
 */
- (UIImage*)hb_imageByScalingAndCroppingForTargetSize:(CGSize)targetSize;


/**
 *  返回圆形图片 直接操作layer.masksToBounds = YES 会比较卡顿
 */
- (UIImage *)hb_circleImage;
@end
