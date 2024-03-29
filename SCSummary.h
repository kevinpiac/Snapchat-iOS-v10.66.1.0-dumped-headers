//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class UIImage;
@protocol SCSummaryDelegate;

@interface SCSummary : NSObject <NSCoding>
{
    _Bool _isDefaultImage;
    id <SCSummaryDelegate> _delegate;
    long long _thumbnailLoadState;
    UIImage *_thumbnailImage;
}

+ (_Bool)_thumbnailImageIsVisible:(id)arg1;
- (void).cxx_destruct;
- (void)_fetchThumbnailImageFromServer:(id)arg1;
- (id)cacheId;
- (id)defaultThumbnailImage;
@property(nonatomic) __weak id <SCSummaryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)failedToLoad;
- (void)fetchThumbnailImageFromServerWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 userSession:(id)arg3;
- (void)fetchThumbnailImageFromServerWithUserSession:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool isDefaultImage; // @synthesize isDefaultImage=_isDefaultImage;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValidSummary;
- (long long)mediaMetadataAvailable;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) long long thumbnailLoadState; // @synthesize thumbnailLoadState=_thumbnailLoadState;

@end

