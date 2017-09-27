//
//  UIImage+HBOther.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (HBOther)
/**
 *  根据图片名返回一张能够自由拉伸的图片 (从中间拉伸)
 */
+ (UIImage *)hb_resizedImage:(NSString *)imgName;

/**
 *  根据图片名返回一张能够自由拉伸的图片
 */
+ (UIImage *)hb_resizedImage:(NSString *)imgName xPos:(CGFloat)xPos yPos:(CGFloat)yPos;

/**
 *  获取视频第一帧图片
 */
+ (UIImage *)hb_getVideoFirstThumbnailImageWithVideoUrl:(NSURL *)videoUrl;
/**
 *  图片不被渲染
 *
 */
+ (UIImage *)hb_imageAlwaysShowOriginalImageWithImageName:(NSString *)imageName;

/**
 *  根据图片和颜色返回一张加深颜色以后的图片
 *  图片着色
 */
+ (UIImage *)hb_colorizeImageWithSourceImage:(UIImage *)sourceImage color:(UIColor *)color;
/**
 *  根据指定的图片颜色和图片大小获取指定的Image
 *
 *  @param color 颜色
 *  @param size  大小
 *
 */
+ (UIImage *)hb_getImageWithColor:(UIColor *)color size:(CGSize)size;
/**
 *  通过传入一个图片对象获取一张缩略图
 */
+ (UIImage *)hb_getThumbnailImageWithImageObj:(id)imageObj;

/**
 *  通过传入一个图片对象获取一张原始图
 */
+ (UIImage *)hb_getOriginalImageWithImageObj:(id)imageObj;
/**
 *  将图片旋转到指定的方向
 *
 *  @param sourceImage 要旋转的图片
 *  @param orientation 旋转方向
 *
 *  @return 返回旋转后的图片
 */
+ (UIImage *) hb_fixImageOrientationWithSourceImage:(UIImage *)sourceImage orientation:(UIImageOrientation)orientation;

/***
 *  将图片旋转到指定方向
 */
+ (UIImage *)hb_fixOrientation:(UIImage *)aImage;
@end
