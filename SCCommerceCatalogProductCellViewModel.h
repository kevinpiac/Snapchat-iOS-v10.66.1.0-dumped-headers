//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCCompositeNetworkImageModel;

@interface SCCommerceCatalogProductCellViewModel : NSObject <NSCopying>
{
    _Bool _isOutOfStockVisible;
    _Bool _isCheckmarkVisible;
    NSString *_productTitle;
    NSString *_price;
    NSString *_strikethroughPrice;
    SCCompositeNetworkImageModel *_compositeImageModel;
    NSString *_productIdentifier;
    SCActionModel *_actionModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(readonly, copy, nonatomic) SCCompositeNetworkImageModel *compositeImageModel; // @synthesize compositeImageModel=_compositeImageModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithProductTitle:(id)arg1 price:(id)arg2 strikethroughPrice:(id)arg3 compositeImageModel:(id)arg4 isOutOfStockVisible:(_Bool)arg5 isCheckmarkVisible:(_Bool)arg6 productIdentifier:(id)arg7 actionModel:(id)arg8;
@property(readonly, nonatomic) _Bool isCheckmarkVisible; // @synthesize isCheckmarkVisible=_isCheckmarkVisible;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isOutOfStockVisible; // @synthesize isOutOfStockVisible=_isOutOfStockVisible;
@property(readonly, copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(readonly, copy, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;
@property(readonly, copy, nonatomic) NSString *strikethroughPrice; // @synthesize strikethroughPrice=_strikethroughPrice;

@end

