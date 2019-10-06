//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLensUploadAssetInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _deleteAfterUploading;
    NSString *_assetId;
    NSString *_assetPath;
    NSString *_assetBatchId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *assetBatchId; // @synthesize assetBatchId=_assetBatchId;
@property(readonly, copy, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(readonly, copy, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool deleteAfterUploading; // @synthesize deleteAfterUploading=_deleteAfterUploading;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssetId:(id)arg1 assetPath:(id)arg2 assetBatchId:(id)arg3 deleteAfterUploading:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end
