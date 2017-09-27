//
//  UIView+HBExtention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/21.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,HBaddLineStyle) {
    
    HBaddLineStyleTop,
    HBaddLineStyleRight,
    HBaddLineStyleLeft,
    HBaddLineStyleBottom,
};

@interface UIView (HBExtention)
/**
 uiview转UIimage

 @param theView uiview
 @return 转换后的uiimage
 */
+ (UIImage *)hb_getImageFromView:(UIView *)theView;

/**
 给view添加线条

 @param style 线条的位置
 */
- (void)hb_addLineWithStyle:(HBaddLineStyle)style;
/**
 给view添加渐变颜色
 */
- (void)hb_addGradientColorToView;

/**
 添加小菊花
 */
- (void)addRefreshActivityView;

/**
 移除小菊花
 */
- (void)removeRefreshActivityView;
@end
