//
//  EMBTManager.h
//  EMBTDeviceConection
//
//  Created by iOS on 2018/1/18.
//  Copyright © 2018年 eMeet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMBTBlocks.h"
#import "EMBTDevice.h"

@interface EMBTManager : NSObject

@property (readonly) CBCentralManagerState state; //蓝牙状态

@property (nonatomic, copy) EMBluetoothDidUpdateState updateStateBlock;
@property (nonatomic, copy) EMConnectChanged connectChangedBlock;
@property (nonatomic, copy) EMReceivedData receivedDataBlock;

//block合集
- (void)connectState:(EMBluetoothDidUpdateState)updateStateBlock
              change:(EMConnectChanged)connectChangedBlock
        receivedData:(EMReceivedData)receivedDataBlock;

//单例
+ (instancetype)manager;

//连接eMeet蓝牙设备后，并且在CBCentralManagerStatePoweredOn状态下调用
- (void)scan;

//停止扫描
- (void)stopScan;

//扫描并自动连接
- (void)scanAndConnectIfPoweredOn;

@end
