//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedSectionLayoutConfiguration;

@interface SCDiscoverFeedSectionMetadata : NSObject <NSCopying, NSCoding>
{
    unsigned long long _feedType;
    NSString *_displayText;
    NSString *_loggingKey;
    SCDiscoverFeedSectionLayoutConfiguration *_layoutConfiguration;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedType:(unsigned long long)arg1 displayText:(id)arg2 loggingKey:(id)arg3 layoutConfiguration:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedSectionLayoutConfiguration *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(readonly, copy, nonatomic) NSString *loggingKey; // @synthesize loggingKey=_loggingKey;

@end

