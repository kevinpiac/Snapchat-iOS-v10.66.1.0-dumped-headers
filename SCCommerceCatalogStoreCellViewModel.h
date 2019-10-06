//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCCompositeNetworkImageModel;

@interface SCCommerceCatalogStoreCellViewModel : NSObject <NSCopying>
{
    _Bool _isCheckmarkVisible;
    NSString *_storeTitle;
    NSString *_subtitle;
    SCCompositeNetworkImageModel *_compositeImageModel;
    NSString *_storeIdentifier;
    SCActionModel *_actionModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(readonly, copy, nonatomic) SCCompositeNetworkImageModel *compositeImageModel; // @synthesize compositeImageModel=_compositeImageModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithStoreTitle:(id)arg1 subtitle:(id)arg2 compositeImageModel:(id)arg3 isCheckmarkVisible:(_Bool)arg4 storeIdentifier:(id)arg5 actionModel:(id)arg6;
@property(readonly, nonatomic) _Bool isCheckmarkVisible; // @synthesize isCheckmarkVisible=_isCheckmarkVisible;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, copy, nonatomic) NSString *storeTitle; // @synthesize storeTitle=_storeTitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;

@end

