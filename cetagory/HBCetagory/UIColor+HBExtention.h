//
//  UIColor+HBExtention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/21.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HBExtention)

/**
 用字符串来设置颜色

 @param hex 字符串
 @return 返回color
 */
+ (UIColor*)colorWithHexString:(NSString*)hex;
/**
 用字符串来设置颜色

 @param hex 字符串
 @param alpha 透明度
 @return 返回color
 */
+ (UIColor*)colorWithHexString:(NSString*)hex withAlpha:(CGFloat)alpha;

@end
