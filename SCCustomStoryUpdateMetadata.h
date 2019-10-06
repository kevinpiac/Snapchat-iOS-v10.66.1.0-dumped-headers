//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCCustomStoryUpdateMetadata : NSObject <NSCopying>
{
    _Bool _updatedAutoSave;
    NSString *_publicationId;
    long long _updateOption;
    NSString *_updatedDisplayName;
    NSArray *_updatedViewerIds;
    NSArray *_updatedPosterIds;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithPublicationId:(id)arg1 updateOption:(long long)arg2 updatedDisplayName:(id)arg3 updatedAutoSave:(_Bool)arg4 updatedViewerIds:(id)arg5 updatedPosterIds:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
@property(readonly, nonatomic) long long updateOption; // @synthesize updateOption=_updateOption;
@property(readonly, nonatomic) _Bool updatedAutoSave; // @synthesize updatedAutoSave=_updatedAutoSave;
@property(readonly, copy, nonatomic) NSString *updatedDisplayName; // @synthesize updatedDisplayName=_updatedDisplayName;
@property(readonly, copy, nonatomic) NSArray *updatedPosterIds; // @synthesize updatedPosterIds=_updatedPosterIds;
@property(readonly, copy, nonatomic) NSArray *updatedViewerIds; // @synthesize updatedViewerIds=_updatedViewerIds;

@end

