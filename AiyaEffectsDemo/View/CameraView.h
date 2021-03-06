//
//  CameraView.h
//  AiyaEffectsDemo
//
//  Created by 汪洋 on 2017/3/9.
//  Copyright © 2016年 深圳哎吖科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AiyaCameraSDK/AiyaCameraSDK.h>

@protocol CameraViewDelegate <NSObject>

- (void)onChangeCameraPosition:(AVCaptureDevicePosition)cameraPosition;

- (void)onEffectClick:(NSString *)path;

- (void)onStyleClick:(UIImage *)image;

- (void)onSmoothSkinIntensityChange:(float)intensity;

- (void)onWhitenSkinIntensityChange:(float)intensity;

- (void)onBigEyesScaleChange:(float)scale;

- (void)onSlimFaceScaleChange:(float)scale;

- (void)onStyleIntensityChange:(float)styleIntensity;

@end

@interface CameraView : UIView

//data step 3 UIImage|Text|Path
@property (nonatomic, strong) NSArray *effectData;

//data step 3 UIImage|Text|UIImage
@property (nonatomic, strong) NSArray *styleData;

@property (nonatomic, weak) id<CameraViewDelegate> delegate;

@end
