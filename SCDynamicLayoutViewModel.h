//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIImage;

@interface SCDynamicLayoutViewModel : NSObject <NSCopying>
{
    UIColor *_foregroundColor;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    NSString *_channelTitle;
    double _topInset;
    long long _backButtonType;
    UIImage *_backButtonImage;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIImage *backButtonImage; // @synthesize backButtonImage=_backButtonImage;
@property(readonly, nonatomic) long long backButtonType; // @synthesize backButtonType=_backButtonType;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, copy, nonatomic) NSString *channelTitle; // @synthesize channelTitle=_channelTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (unsigned long long)hash;
- (id)initWithForegroundColor:(id)arg1 backgroundColor:(id)arg2 borderColor:(id)arg3 channelTitle:(id)arg4 topInset:(double)arg5 backButtonType:(long long)arg6 backButtonImage:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;

@end

