//
// Created by Jörg Polakowski on 14/12/13.
// Copyright (c) 2013 kevinzhow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, PNLineChartPointStyle) {
    PNLineChartPointStyleNone = 0,
    PNLineChartPointStyleCircle = 1,
    PNLineChartPointStyleSquare = 3,
    PNLineChartPointStyleTriangle = 4
};


@class PNLineChartDataItem;

typedef PNLineChartDataItem *(^LCLineChartDataGetter)(NSUInteger item);

@interface PNLineChartData : NSObject

@property (strong) UIColor *color;
@property (nonatomic) CGFloat alpha;
@property NSUInteger itemCount;
@property (copy) LCLineChartDataGetter getData;
@property (strong, nonatomic) NSString *dataTitle;

@property (nonatomic) BOOL showPointLabel;
@property (nonatomic) UIColor *pointLabelColor;
@property (nonatomic) UIFont *pointLabelFont;
// 每个 point 点的格式.默认是%f0.1
@property (nonatomic) NSString *pointLabelFormat;

@property (nonatomic, assign) PNLineChartPointStyle inflexionPointStyle;
@property (nonatomic) UIColor *inflexionPointColor;

/**
 * If PNLineChartPointStyle is circle, this returns the circle's diameter.
 * If PNLineChartPointStyle is square, each point is a square with each side equal in length to this value.
 */
@property (nonatomic, assign) CGFloat inflexionPointWidth;

// MARK: -填充 flexPoint 的颜色
@property (nonatomic, assign) CGColorRef inflexionPointFillColor;

@property (nonatomic, strong) NSArray *needToShowInflexionPointText;
@property (nonatomic, strong) NSArray *showInflexionPointText;

@property (nonatomic, assign) CGFloat lineWidth;

@end


