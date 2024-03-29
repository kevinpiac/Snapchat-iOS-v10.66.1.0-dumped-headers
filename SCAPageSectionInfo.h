//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCAPageSectionInfo : NSObject <NamedEvent, NSCopying>
{
    NSNumber *pageUpdateId;
    NSNumber *sectionPos;
    long long pageLayout;
    long long sectionType;
    NSString *sectionTypeSpecific;
    NSString *sectionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getPageLayout;
- (long long)getPageUpdateId;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)getSectionId;
- (long long)getSectionPos;
- (long long)getSectionType;
- (id)getSectionTypeSpecific;
- (id)init;
- (void)setPageLayout:(long long)arg1;
- (void)setPageUpdateId:(long long)arg1;
- (void)setSectionId:(id)arg1;
- (void)setSectionPos:(long long)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setSectionTypeSpecific:(id)arg1;

@end

