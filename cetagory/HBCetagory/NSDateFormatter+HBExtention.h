//
//  NSDateFormatter+HBExtention.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDateFormatter (HBExtention)

/**
 设置转时间的形式

 @param dateFormat 形式
 @return NSDateFormatter
 */
+ (instancetype)hb_dateFormatterWithFormat:(NSString *)dateFormat;

/**
 默认的时间形式

 @return yyyy-MM-dd HH:mm:ss
 */
+ (instancetype)hb_defaultDateFormatter;/*yyyy/MM/dd HH:mm:ss*/

@end
