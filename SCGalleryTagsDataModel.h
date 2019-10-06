//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SCGalleryTagsDataModel : NSObject <NSCopying>
{
    long long _tagVersion;
    NSArray *_timeTags;
    NSArray *_locationTags;
    NSArray *_visualTags;
    NSArray *_metaTags;
    NSDictionary *_visualTagsWithConfidence;
    NSString *_tagClusterName;
    NSString *_locationClusterName;
    NSString *_caption;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTagVersion:(long long)arg1 timeTags:(id)arg2 locationTags:(id)arg3 visualTags:(id)arg4 metaTags:(id)arg5 visualTagsWithConfidence:(id)arg6 tagClusterName:(id)arg7 locationClusterName:(id)arg8 caption:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *locationClusterName; // @synthesize locationClusterName=_locationClusterName;
@property(readonly, copy, nonatomic) NSArray *locationTags; // @synthesize locationTags=_locationTags;
@property(readonly, copy, nonatomic) NSArray *metaTags; // @synthesize metaTags=_metaTags;
@property(readonly, copy, nonatomic) NSString *tagClusterName; // @synthesize tagClusterName=_tagClusterName;
@property(readonly, nonatomic) long long tagVersion; // @synthesize tagVersion=_tagVersion;
@property(readonly, copy, nonatomic) NSArray *timeTags; // @synthesize timeTags=_timeTags;
@property(readonly, copy, nonatomic) NSArray *visualTags; // @synthesize visualTags=_visualTags;
@property(readonly, copy, nonatomic) NSDictionary *visualTagsWithConfidence; // @synthesize visualTagsWithConfidence=_visualTagsWithConfidence;

@end

