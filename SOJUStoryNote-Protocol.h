//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUStoryPointer;

@protocol SOJUStoryNote <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *isFriendViewOfPublicStory;
@property(readonly, copy, nonatomic) NSNumber *saved;
@property(readonly, copy, nonatomic) NSNumber *screenRecorded;
@property(readonly, copy, nonatomic) NSNumber *screenshotted;
@property(readonly, copy, nonatomic) SOJUStoryPointer *storypointer;
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@property(readonly, copy, nonatomic) NSString *viewer;
@end

