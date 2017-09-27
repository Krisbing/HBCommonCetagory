//
//  UILabel+HBExtention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (HBExtention)

/**
 设置行间距

 @param text 文本
 @param lineSpacing 行间距
 */
- (void)setText:(NSString*)text lineSpacing:(CGFloat)lineSpacing;

/**
 计算label高度

 @param text 输入文本
 @param fontSize 文字大小
 @param width 宽度
 @param lineSpacing 行间距
 @return 文本高度
 */
+ (CGFloat)text:(NSString*)text heightWithFontSize:(CGFloat)fontSize width:(CGFloat)width lineSpacing:(CGFloat)lineSpacing;
@end
