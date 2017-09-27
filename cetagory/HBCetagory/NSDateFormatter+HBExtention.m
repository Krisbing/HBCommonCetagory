//
//  NSDateFormatter+HBExtention.m
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/27.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import "NSDateFormatter+HBExtention.h"

@implementation NSDateFormatter (HBExtention)

+ (instancetype)hb_dateFormatterWithFormat:(NSString *)dateFormat
{
    NSDateFormatter *dateFormatter = [[self alloc] init];
    dateFormatter.dateFormat = dateFormat;
    return dateFormatter;
}

+ (instancetype)hb_defaultDateFormatter
{
    return [self hb_dateFormatterWithFormat:@"yyyy-MM-dd HH:mm:ss"];
}

@end
