//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class MLBIMUMetaData, NSMutableArray;

@interface MLBIMUDataSet : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *codecFramesArray; // @dynamic codecFramesArray;
@property(readonly, nonatomic) unsigned long long codecFramesArray_Count; // @dynamic codecFramesArray_Count;
@property(nonatomic) _Bool hasImuMetaData; // @dynamic hasImuMetaData;
@property(retain, nonatomic) NSMutableArray *imuDataFramesArray; // @dynamic imuDataFramesArray;
@property(readonly, nonatomic) unsigned long long imuDataFramesArray_Count; // @dynamic imuDataFramesArray_Count;
@property(retain, nonatomic) MLBIMUMetaData *imuMetaData; // @dynamic imuMetaData;
@property(retain, nonatomic) NSMutableArray *videoFramesArray; // @dynamic videoFramesArray;
@property(readonly, nonatomic) unsigned long long videoFramesArray_Count; // @dynamic videoFramesArray_Count;

@end

