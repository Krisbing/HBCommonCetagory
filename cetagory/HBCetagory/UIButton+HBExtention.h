//
//  UIButton+HBExtention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/22.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (HBExtention)

/**
 添加enabled按钮的渐变颜色
 */
- (void)hb_addButtonAvailableColor;

/**
 添加unabled按钮的渐变颜色
 */
- (void)hb_addButtonUnavailableColor;
@end
