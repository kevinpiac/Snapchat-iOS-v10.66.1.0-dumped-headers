//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSValue;

@interface SCUnifiedProfileStoriesSectionConfiguration : NSObject <NSCopying>
{
    NSValue *_insets;
    NSString *_storyIdentifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithInsets:(id)arg1 storyIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) NSValue *insets; // @synthesize insets=_insets;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *storyIdentifier; // @synthesize storyIdentifier=_storyIdentifier;

@end

