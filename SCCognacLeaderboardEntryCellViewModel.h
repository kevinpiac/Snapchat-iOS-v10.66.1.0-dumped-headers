//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCNetworkImage, SCSnapchatterThumbnailViewModel, UIImage;

@interface SCCognacLeaderboardEntryCellViewModel : NSObject <NSCopying>
{
    _Bool _isMyEntry;
    NSString *_userId;
    NSString *_rank;
    SCSnapchatterThumbnailViewModel *_thumbnailViewModel;
    NSString *_name;
    NSString *_info;
    UIImage *_infoIcon;
    NSString *_score;
    SCNetworkImage *_scoreIcon;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(readonly, copy, nonatomic) UIImage *infoIcon; // @synthesize infoIcon=_infoIcon;
- (id)initWithIsMyEntry:(_Bool)arg1 userId:(id)arg2 rank:(id)arg3 thumbnailViewModel:(id)arg4 name:(id)arg5 info:(id)arg6 infoIcon:(id)arg7 score:(id)arg8 scoreIcon:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isMyEntry; // @synthesize isMyEntry=_isMyEntry;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) SCNetworkImage *scoreIcon; // @synthesize scoreIcon=_scoreIcon;
@property(readonly, copy, nonatomic) SCSnapchatterThumbnailViewModel *thumbnailViewModel; // @synthesize thumbnailViewModel=_thumbnailViewModel;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end
