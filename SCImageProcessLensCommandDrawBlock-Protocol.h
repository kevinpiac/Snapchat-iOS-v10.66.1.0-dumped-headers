//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class LSATexture, NSDictionary, NSString, SCImageProcessLensCommand, SCImageProcessProgram;

@protocol SCImageProcessLensCommandDrawBlock
- (_Bool)executeWithContext:(NSDictionary *)arg1 processedTexture:(LSATexture *)arg2 program:(SCImageProcessProgram *)arg3 command:(SCImageProcessLensCommand *)arg4 error:(id *)arg5;
- (NSString *)fragmentShaderString;
@end
