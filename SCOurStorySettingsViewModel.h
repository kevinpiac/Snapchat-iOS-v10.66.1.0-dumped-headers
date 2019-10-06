//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCNetworkImage;

@interface SCOurStorySettingsViewModel : NSObject <NSCopying>
{
    NSString *_id;
    SCNetworkImage *_image;
    NSString *_titleText;
    NSString *_timeAgo;
    unsigned long long _viewCount;
    unsigned long long _screenshotCount;
    SCActionModel *_tapCellActionModel;
    SCActionModel *_tapDeleteButtonActionModel;
    SCActionModel *_tapSaveButtonActionModel;
    long long _savingState;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(readonly, copy, nonatomic) SCNetworkImage *image; // @synthesize image=_image;
- (id)initWithId:(id)arg1 image:(id)arg2 titleText:(id)arg3 timeAgo:(id)arg4 viewCount:(unsigned long long)arg5 screenshotCount:(unsigned long long)arg6 tapCellActionModel:(id)arg7 tapDeleteButtonActionModel:(id)arg8 tapSaveButtonActionModel:(id)arg9 savingState:(long long)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long savingState; // @synthesize savingState=_savingState;
@property(readonly, nonatomic) unsigned long long screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(readonly, copy, nonatomic) SCActionModel *tapCellActionModel; // @synthesize tapCellActionModel=_tapCellActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapDeleteButtonActionModel; // @synthesize tapDeleteButtonActionModel=_tapDeleteButtonActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapSaveButtonActionModel; // @synthesize tapSaveButtonActionModel=_tapSaveButtonActionModel;
@property(readonly, copy, nonatomic) NSString *timeAgo; // @synthesize timeAgo=_timeAgo;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;

@end

