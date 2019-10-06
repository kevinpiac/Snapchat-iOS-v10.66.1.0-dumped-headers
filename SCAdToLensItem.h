//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAdToLensItem : NSObject <NSCopying, NSCoding>
{
    NSString *_scancodeId;
    NSString *_scancodeVersion;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithScancodeId:(id)arg1 scancodeVersion:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *scancodeId; // @synthesize scancodeId=_scancodeId;
@property(readonly, copy, nonatomic) NSString *scancodeVersion; // @synthesize scancodeVersion=_scancodeVersion;

@end

