//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCOperaViewInteraction : NSObject
{
    unsigned long long _type;
    double _locationXToScreenWidthRatio;
    double _locationYToScreenHeightRatio;
    struct CGPoint _location;
}

+ (id)interactionWithType:(unsigned long long)arg1;
+ (id)interactionWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 locationXToScreenWidthRatio:(double)arg3 locationYToScreenHeightRatio:(double)arg4;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 locationXToScreenWidthRatio:(double)arg3 locationYToScreenHeightRatio:(double)arg4;
@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) double locationXToScreenWidthRatio; // @synthesize locationXToScreenWidthRatio=_locationXToScreenWidthRatio;
@property(readonly, nonatomic) double locationYToScreenHeightRatio; // @synthesize locationYToScreenHeightRatio=_locationYToScreenHeightRatio;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

@end
