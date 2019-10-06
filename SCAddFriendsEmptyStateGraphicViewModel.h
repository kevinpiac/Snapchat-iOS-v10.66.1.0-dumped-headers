//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCNetworkImage;

@interface SCAddFriendsEmptyStateGraphicViewModel : NSObject <NSCopying>
{
    SCNetworkImage *_networkImage;
    NSString *_staticImageName;
    struct CGSize _graphicSize;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) struct CGSize graphicSize; // @synthesize graphicSize=_graphicSize;
- (unsigned long long)hash;
- (id)initWithNetworkImage:(id)arg1 staticImageName:(id)arg2 graphicSize:(struct CGSize)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCNetworkImage *networkImage; // @synthesize networkImage=_networkImage;
@property(readonly, copy, nonatomic) NSString *staticImageName; // @synthesize staticImageName=_staticImageName;

@end

