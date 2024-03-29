//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface SCDiscoverFeedDebugViewModel : NSObject <NSCopying>
{
    NSString *_debugButtonImageName;
    UIColor *_debugButtonColor;
    UIColor *_debugVisualElementColor;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) UIColor *debugButtonColor; // @synthesize debugButtonColor=_debugButtonColor;
@property(readonly, copy, nonatomic) NSString *debugButtonImageName; // @synthesize debugButtonImageName=_debugButtonImageName;
@property(readonly, copy, nonatomic) UIColor *debugVisualElementColor; // @synthesize debugVisualElementColor=_debugVisualElementColor;
- (unsigned long long)hash;
- (id)initWithDebugButtonImageName:(id)arg1 debugButtonColor:(id)arg2 debugVisualElementColor:(id)arg3;
- (_Bool)isEqual:(id)arg1;

@end

