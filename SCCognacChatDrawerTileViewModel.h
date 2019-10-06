//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, SCCognacChatDrawerTileIconViewModel, SCCognacChatDrawerTileItem;

@interface SCCognacChatDrawerTileViewModel : NSObject <NSCopying>
{
    SCCognacChatDrawerTileIconViewModel *_iconViewModel;
    NSAttributedString *_appName;
    NSAttributedString *_appDescription;
    unsigned long long _minimumNumberOfPlayers;
    unsigned long long _maximumNumberOfPlayers;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    SCCognacChatDrawerTileItem *_tileItem;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSAttributedString *appDescription; // @synthesize appDescription=_appDescription;
@property(readonly, copy, nonatomic) NSAttributedString *appName; // @synthesize appName=_appName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCCognacChatDrawerTileIconViewModel *iconViewModel; // @synthesize iconViewModel=_iconViewModel;
- (id)initWithIconViewModel:(id)arg1 appName:(id)arg2 appDescription:(id)arg3 minimumNumberOfPlayers:(unsigned long long)arg4 maximumNumberOfPlayers:(unsigned long long)arg5 tapActionModel:(id)arg6 longPressActionModel:(id)arg7 tileItem:(id)arg8;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, nonatomic) unsigned long long maximumNumberOfPlayers; // @synthesize maximumNumberOfPlayers=_maximumNumberOfPlayers;
@property(readonly, nonatomic) unsigned long long minimumNumberOfPlayers; // @synthesize minimumNumberOfPlayers=_minimumNumberOfPlayers;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) SCCognacChatDrawerTileItem *tileItem; // @synthesize tileItem=_tileItem;

@end
