//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCCDGallerySnapTransientState, SCObjectPlaceholder;

@interface SCGallerySnapTransientStateChangeRequest : NSObject
{
    SCCDGallerySnapTransientState *_gallerySnapTransientState;
    SCObjectPlaceholder *_objectPlaceholder;
}

+ (id)changeRequestForGallerySnapTransientState:(id)arg1;
+ (id)creationRequestWithGallerySnapTransientState:(id)arg1;
+ (void)deleteAllGallerySnapTransientStates;
+ (void)deleteGallerySnapTransientStates:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bgMediaUploadKey;
@property(nonatomic) int bgMediaUploadState;
- (id)initWithGallerySnapTransientState:(id)arg1;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, nonatomic) SCObjectPlaceholder *placeholderForCreatedGallerySnapTransientState;
@property(copy, nonatomic) NSString *snapId;
- (void)setWithGallerySnapTransientState:(id)arg1;

@end

