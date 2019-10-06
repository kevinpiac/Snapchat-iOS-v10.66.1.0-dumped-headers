//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCheetahFeedAstSignalNode : NSObject <NSCopying, NSCoding>
{
    int _signalKey;
    NSString *_signalName;
    double _defaultValue;
    long long _type;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignalName:(id)arg1 defaultValue:(double)arg2 type:(long long)arg3 signalKey:(int)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int signalKey; // @synthesize signalKey=_signalKey;
@property(readonly, copy, nonatomic) NSString *signalName; // @synthesize signalName=_signalName;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end

