//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchLoggingAdapting-Protocol.h"

@class NSString;

@interface SCCollectionViewCarouselSectionLoggingAdapter : NSObject <SCSearchLoggingAdapting>
{
}

+ (id)announcerIdentifier;
- (id)loggingEventForEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

