//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray, NSMutableArray, NSString, SnapBrainResponse_Results_NormalizedBoundingBox;

@interface SnapBrainResponse_Results_Product_BoundingBox : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SnapBrainResponse_Results_NormalizedBoundingBox *bbox; // @dynamic bbox;
@property(copy, nonatomic) NSString *compressedFeature; // @dynamic compressedFeature;
@property(retain, nonatomic) GPBFloatArray *featureVectorArray; // @dynamic featureVectorArray;
@property(readonly, nonatomic) unsigned long long featureVectorArray_Count; // @dynamic featureVectorArray_Count;
@property(nonatomic) unsigned int frameId; // @dynamic frameId;
@property(nonatomic) _Bool hasBbox; // @dynamic hasBbox;
@property(retain, nonatomic) NSMutableArray *indexArray; // @dynamic indexArray;
@property(readonly, nonatomic) unsigned long long indexArray_Count; // @dynamic indexArray_Count;
@property(copy, nonatomic) NSString *labelName; // @dynamic labelName;
@property(nonatomic) float score; // @dynamic score;

@end

