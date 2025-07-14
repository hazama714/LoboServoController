# AibouMaker2 LoboServoController v0.9.0-beta-LA

Arduinoと連携して、ロボット左腕のサーボを制御するためのベータ版ツールです。  
Unity製のWindowsアプリとして提供され、簡易アバターによる視覚表示や補正機能に対応しています。

---

## 概要

本ツールは以下の用途を想定して開発されました。

- 実機サーボ（SG90等）をスライダーで制御  
- 補正角度、反転設定、制限角度の調整  
- 箱型の簡易アバターによる動作視認  
- ArduinoとPCをUSBシリアル接続して連動制御  

> 現在は「左腕対応」「箱アバターのみ」のベータ版です。

---

## ファイル構成

AibouMaker2_LoboServoController/
├─ AibouMaker2_LoboServoController.exe # 実行ファイル
├─ AibouMaker2_LoboServoController_Data/ # Unityのデータフォルダ
├─ Lobo_ServoControl_20250714.ino # Arduino用スケッチ
├─ README.md # 本ファイル
└─ servo_config.json（※初回起動時に自動生成）

yaml
コピーする
編集する

---

## 使用方法

1. `AibouMaker2_LoboServoController.exe` を起動  
2. COMポートと通信速度（115200bps）を選択  
3. スライダーで左腕のサーボを制御  
4. 補正・反転・制限をUIから調整  
5. 設定は `servo_config.json` に自動保存されます  

---

## Arduinoスケッチについて

- ファイル名：`Lobo_ServoControl_20250714.ino`  
- 使用ボード：Arduino Uno（ATmega328P）  
- 通信速度：115200bps（アプリと一致させてください）  
- 接続例：D2〜D9 にサーボ信号線を接続

### 書き込み手順

1. Arduino IDE で `.ino` ファイルを開く  
2. 使用するボードとポートを選択  
3. 「書き込み」を実行  
4. アプリとUSB接続して連動動作を確認

---

## 設定ファイル（servo_config.json）

- 保存場所：  
  `C:\Users\<ユーザー名>\AppData\LocalLow\ST_HAZAMA714\AibouMaker2_LoboServoController\`  
- 内容：ポート設定、補正角度、反転設定、角度制限など  
- 備考：アプリ起動時に自動生成され、手動編集も可能です  

---

## 注意事項

- ポート未接続・無効なポート選択時は、アバターとサーボの動作が同期しない場合があります。  
  一度スライダーを動かすことで自動同期されます。  
- サーボへの送信角度は設定された最小・最大リミットを超えないよう制御されます。  
- 現在のアバターはジェネリック構造であり、VRM/Humanoidリグには対応していません。

---

## ライセンスとクレジット

- Unity © Unity Technologies  
- 本ツールおよび Arduinoスケッチ：Studio Hazama による独自開発  
- UI・フォント等の外部素材：フリーライセンス素材を使用（一部別記）

非商用利用の範囲で自由に使用・改変可能です。詳細は `LICENSE` を参照してください。

---

## 開発・問い合わせ先

開発元：Studio Hazama / 介塚はざま  
公式サイト：[https://hazama714.studio/](https://hazama714.studio/)  

ご意見・不具合報告は GitHub Issue または Twitter にて受け付けています。