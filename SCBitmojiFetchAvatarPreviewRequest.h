//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCBitmojiFetchAvatarPreviewRequest : NSObject <NSCopying>
{
    NSNumber *_outfitId;
    NSString *_templateId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithOutfitId:(id)arg1 templateId:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *outfitId; // @synthesize outfitId=_outfitId;
@property(readonly, copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;

@end
